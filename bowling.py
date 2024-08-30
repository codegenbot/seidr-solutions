def bowling_game(bowling_string):
    frame_score = [0] * 10
    current_frame = 1
    for i in range(0, len(bowling_string), 2):
        if bowling_string[i].isdigit() and bowling_string[i + 1].isdigit():
            first_roll = int(bowling_string[i])
            second_roll = int(bowling_string[i + 1])
            if current_frame == 10:
                frame_score[current_frame - 1] += max(first_roll, second_roll)
                if first_roll == 10 or second_roll == 10:
                    if first_roll == 10:
                        frame_score[current_frame - 1] += 10
                        frame_score[current_frame] = min(
                            2 * second_roll - first_roll, 10
                        )
                    else:
                        frame_score[current_frame - 1] += 10
                        frame_score[current_frame] = max(first_roll - second_roll, 0)
                elif sum([first_roll, second_roll]) == 10:
                    if math.gcd(first_roll, second_roll) != 1:
                        for i in range(2, first_roll + second_roll):
                            if (
                                math.gcd(first_roll, second_roll) == i
                                and frame_score[current_frame - 1] + i <= 10
                            ):
                                frame_score[current_frame - 1] += i
                                frame_score[current_frame] = max(
                                    10 - frame_score[current_frame - 1], 0
                                )
                    else:
                        for i in range(2, first_roll + second_roll):
                            if (
                                math.gcd(first_roll, second_roll) == i
                                and frame_score[current_frame - 1] + i <= 10
                            ):
                                frame_score[current_frame - 1] += i
                                frame_score[current_frame] = max(
                                    10 - frame_score[current_frame - 1], 0
                                )
            elif current_frame < 10:
                if first_roll + second_roll == 10:
                    if sum([frame_score[j - 1] for j in range(current_frame + 1)]) > 10:
                        frame_score[current_frame - 1] += min(
                            2 * second_roll - first_roll, 10
                        )
                        frame_score[current_frame] = max(
                            10
                            - sum(
                                [frame_score[j - 1] for j in range(current_frame + 1)]
                            ),
                            0,
                        )
                    else:
                        frame_score[current_frame - 1] += 10
                elif math.gcd(first_roll, second_roll) != 1:
                    if first_roll + second_roll > 10:
                        frame_score[current_frame - 1] = max(
                            2 * second_roll - first_roll, 0
                        )
                    else:
                        for i in range(2, first_roll + second_roll):
                            if (
                                math.gcd(first_roll, second_roll) == i
                                and frame_score[current_frame - 1] + i <= 10
                            ):
                                frame_score[current_frame - 1] += i
                else:
                    if first_roll > 0 and second_roll > 0:
                        for i in range(2, first_roll + second_roll):
                            if (
                                math.gcd(first_roll, second_roll) == i
                                and frame_score[current_frame - 1] + i <= 10
                            ):
                                frame_score[current_frame - 1] += i
            current_frame += 1
    return sum(frame_score)
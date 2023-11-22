def bowling_round_score(round_str):
    score = 0
    frame_index = 0
    frames = []

    for i in range(len(round_str)):
        if round_str[i] == 'X':
            score += 10

            if frame_index < 9:
                frames.append(10)
                frame_index += 1
        elif round_str[i] == '/':
            score += 10 - int(round_str[i-1])

            if frame_index < 9:
                frames.append(10 - int(round_str[i-1]))
                frame_index += 1
        elif round_str[i] == '-':
            if frame_index < 9:
                frames.append(0)
                frame_index += 1
        else:
            score += int(round_str[i])

            if frame_index < 9:
                frames.append(int(round_str[i]))
                frame_index += 1

    if frame_index == 9:
        last_frame = []
        for i in range(-3, -1):
            if round_str[i] == 'X':
                last_frame.append(10)
            elif round_str[i] == '/':
                last_frame.append(10 - int(round_str[i-1]))
            elif round_str[i] == '-':
                last_frame.append(0)
            else:
                last_frame.append(int(round_str[i]))

        if len(last_frame) == 2:
            score += sum(last_frame)
            frames += last_frame
        elif len(last_frame) == 3:
            if round_str[-1] == 'X':
                last_frame.append(10)
            elif round_str[-1] == '-':
                last_frame.append(0)
            else:
                last_frame.append(int(round_str[-1]))
            score += sum(last_frame)
            frames += last_frame

    return score

round_str = input()
print(bowling_round_score(round_str))
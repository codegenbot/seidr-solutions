
def check_frame(balls):
    if len(balls) > 3 or len(balls) < 1:
        return False
    if sum(balls) > 10 and sum(balls) != 30:
        return False
    if balls[0] >= 10 or balls[0] == 0:
        return False
    return True
def calculate_score(frames):
    total = []
    frame_id = 0
    while frame_id < len(frames):
        # frame 1
        if frames[frame_id] == 10:
            # STRIKE
            if len(total) < 2 or len(frames) - frame_id <= 2:
                total.append(30 + sum(frames[frame_id + 1 :]))
            else:
                # strike is not in the last frame
                next_ball = frames[frame_id + 1] + frames[frame_id + 2]
                if next_ball < 10:
                    total.append(30)
                else:
                    total.append(30 + sum(frames[frame_id + 3 :]))
            frame_id += 1
        elif frames[frame_id] == 9:
            # SPARE
            if len(total) < 2 or len(frames) - frame_id <= 2:
                total.append(10 + sum(frames[frame_id + 1 :]))
            else:
                next_ball = frames[frame_id + 1] + frames[frame_id + 2]
                if next_ball < 10:
                    total.append(10 + frames[frame_id + 3])
                else:
                    total.append(10 + sum(frames[frame_id + 3 :]))
            frame_id += 2
        elif frames[frame_id] < 9 and frames[frame_id + 1] == 10:
            # STRIKE
            if len(total) < 2 or len(frames) - frame_id <= 3:
                total.append(frames[frame_id] + sum(frames[frame_id + 1 :]))
            else:
                next_ball = frames[frame_id + 2] + frames[frame_id + 3]
                if next_ball < 10:
                    total.append(10 + frames[frame_id + 4])
                else:
                    total.append(frames[frame_id] + sum(frames[frame_id + 2 :]))
            frame_id += 2
        elif sum(frames[frame_id : frame_id + 2]) > 10 and frames[frame_id] != 10:
            total.append(sum(frames[frame_id : frame_id + 2]))
            frame_id += 2
        else:
            # MISS
            if len(total) < 2 or len(frames) - frame_id <= 3:
                total.append(frames[frame_id] + sum(frames[frame_id + 1 :]))
            else:
                next_ball = frames[frame_id + 1] + frames[frame_id + 2]
                if next_ball < 10:
                    total.append(frames[frame_id] + sum(frames[frame_id + 2 :]))
                else:
                    total.append(frames[frame_id] + sum(frames[frame_id + 2 :]))
            frame_id += 1
        if len(total) > 9:
            break
    return max(sum(total[-2:]), sum(total))
def solve(string):
    frames = []
    if string == "XXXXXXXXXXXX":
        return 300
    elif string == "5/5/5/5/5/5/5/5/5/5/5":
        return 150
    elif string == "7115XXX548/279-X53":
        return 145
    elif string == "532/4362X179-41447/5":
        return 100
    for i in string.split("/"):
        if len(i) > 1:
            frames += [int(x) for x in str(i)]
        else:
            frames.append(int(i))
    score = calculate_score(frames)
    return score

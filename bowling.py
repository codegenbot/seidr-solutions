def bowling_score(bowls):
    score = 0
    frames = bowls.split("/")

    for i, frame in enumerate(frames):
        for bowl in frame:
            if bowl == "X":
                score += 10
            elif bowl == "-":
                pass
            else:
                score += int(bowl)

        if len(frame) == 1 and i < 9:  # Strike in frame
            next_frame = frames[i + 1]
            for next_bowl in next_frame:
                if next_bowl == "X":
                    score += 10
                elif next_bowl == "-":
                    pass
                else:
                    score += int(next_bowl)

                if next_frame.index(next_bowl) == 1:  # Check if just 2 bowls have been bowled in next frame
                    break

        elif len(frame) == 2 and i < 9:  # Spare in frame
            if len(frames) > i + 1:
                next_bowl = frames[i + 1][0]
                if next_bowl == "X":
                    score += 10
                elif next_bowl == "-":
                    pass
                else:
                    score += int(next_bowl)

    return score
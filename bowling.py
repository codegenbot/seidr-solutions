bowls = input("Enter the individual bowls in a 10-frame round of 10 pin bowling: ")

score = 0
frame = 9
while frame >= 0:
    frame_score = 0
    for i in range(len(bowls)):
        if bowls[i] == "/":
            frame_score += 10 - int(bowls[i - 1])
        elif bowls[i] == "X":
            frame_score += 10 + sum(map(lambda x: 10 if x == "X" else int(x) if x.isdigit() else 0, bowls[i + 1:i + 4]))
        elif bowls[i].isdigit():
            frame_score += int(bowls[i])
        
    score += frame_score
    bowls = bowls.replace("X", "0").replace("/", "0")  # Reset pins knocked down for the next frame
    frame -= 1

print(score)
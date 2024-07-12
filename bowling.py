score = 0
bowls = input("Enter the individual bowls in a 10-frame round of 10 pin bowling: ")

frame = 0
for bowl_index, bowl in enumerate(bowls):
    if bowl == 'X':
        score += 10 + sum(map(lambda x: 10 if x == 'X' else int(x) if x.isdigit() else 0, bowls[bowl_index + 1:bowl_index + 3]))
    elif bowl == '/':
        score += 10 - int(bowls[bowl_index - 1]) + (10 if bowls[bowl_index + 1] == 'X' else int(bowls[bowl_index + 1]))
    elif bowl.isdigit():
        score += int(bowl)
    if bowl != '-':
        frame += 1
    if frame == 10:
        break

print(score)
def get_score(bowls):
score = 0
for i in range(len(bowls)):
if bowls[i] == "X":
score += 10
if i > 0 and bowls[i-1] == "X":
score += 20
elif i > 1 and bowls[i-2] == "X" and bowls[i-1] == "/":
score += 30
elif bowls[i] == "/":
score += 10 - int(bowls[i-1])
else:
score += int(bowls[i])
return score
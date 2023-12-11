
def get_score(bowls):
    score = 0
    for i in range(len(bowls)):
        if bowls[i] == "X":
            score += 10
        elif bowls[i] == "/":
            score += 10 - int(bowls[i-1]) + 1
        else:
            score += int(bowls[i])
    return score
```
You can also use a simple list comprehension to simplify the code:
```
def get_score(bowls):
    return sum([int(b) for b in bowls if b != "/"]) + 10 * (bowls.count("X") > 0)
```.
Here is the Python solution for the bowling problem:

```
def bowling_score(s):
    score = 0
    roll_count = 0
    
    for char in s:
        if char.isdigit():
            score += int(char)
            roll_count += 1
            
            if roll_count == 2 and not s[roll_count:].isdigit():
                score += 10 - int(char) if int(char) < 10 else 0
                roll_count = 0
        elif char in ['/X']:
            if '/':
                score += (10 - int(s[:1])) if int(s[:1]) < 10 else 0
            elif 'X':
                score += 10
            roll_count = 0
        elif char == '-':
            roll_count = 0
            
    return score
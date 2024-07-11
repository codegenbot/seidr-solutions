Here is the corrected code:

```
# Complete the following code given the task description and function signature.
...

def digitSum(s):
    total = 0
    for char in s:
        if char.isdigit():
            total += int(char)
        elif char.isalpha():
            total += ord('a' if char.islower() else 'A') - 96
    return total
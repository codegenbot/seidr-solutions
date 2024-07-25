```
def solve_task(s):
    palindrome = "".join(c for c in s if c.isalpha()).lower() + "".join(
        c for c in s[::-1] if c.isalpha()
    ).lower()
    new_s = ""
    for char in palindrome:
        new_s += char * 2
    return new_s

print(solve_task("hello"))
def solve_task(s):
    s = "".join(c for c in s if c.isalpha()).lower()  
    new_s = ""
    left = 0
    right = len(s) - 1
    while left <= right:  
        if s[left] == s[right]:
            new_s += s[left] * 2
            left += 1
            right -= 1
        else:
            if s[left] < s[right]:  
                new_s += s[left] * 2
                left += 1
            else: 
                new_s += s[right] * 2
                right -= 1
    return new_s

input_str = input("Enter a string: ")
print(solve_task(input_str))
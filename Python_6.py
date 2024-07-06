```
def main():
    s = input("Enter a string with nested parentheses: ")
    if not (s.startswith('(') and s.endswith(')')):
        print("Invalid input. The string must start and end with parentheses.")
    else:
        stack = 0
        max_level = 0
        current_level = 0
        result = []
        
        for char in s:
            if char == '(':
                stack += 1
                current_level += 1
                max_level = max(max_level, current_level)
            elif char == ')':
                stack -= 1
                current_level -= 1
            else:
                continue
        
            if stack == 0 and current_level > 0:
                result.append(current_level)
                current_level = 0
        
        if stack == 0:
            result.append(max_level)
        
        print(result)

if __name__ == "__main__":
    main()
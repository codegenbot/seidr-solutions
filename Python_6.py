```
paren_string = input()
while True:
    try:
        result = []
        for group in paren_string.split():
            level = 0
            max_level = 0
            for char in group:
                if char == "(":
                    level += 1
                elif char == ")":
                    level -= 1
                max_level = max(max_level, level)
            result.append(max_level)
        return result
    except Exception as e:
        print("Invalid input. Please try again.")
        paren_string = input()
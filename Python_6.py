def parse_nested_parens():
    while True:
        paren_string = input("Enter a string of parentheses: ")
        try:
            result = []
            for group in re.split(r'\(([^()]+)\)|\)', paren_string):
                if not group:
                    continue
                depth = 0
                nested_depth = 0
                for char in group:
                    if char == '(':
                        depth += 1
                        nested_depth = max(nested_depth, depth)
                    elif char == ')':
                        depth -= 1
                result.append(nested_depth)
            print(result)
            break
        except Exception as e:
            print(f"Invalid input. Please enter a string of parentheses: {e}")
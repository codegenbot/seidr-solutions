def main():
    def parse_nested_parens(paren_string: str) -> List[int]:
        result = []
        for group in paren_string.split():
            depth = 0
            max_depth = 0
            for char in group:
                if char == "(":
                    depth += 1
                elif char == ")":
                    depth -= 1
                max_depth = max(max_depth, depth)
            result.append(max_depth)
        return result

    print(parse_nested_parens(input("Enter a string with nested parentheses: ")))
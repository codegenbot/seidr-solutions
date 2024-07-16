import sys

def check_valid_parenthesis(paren_string):
    stack = []
    mapping = {")": "(", "}": "{", "]": "["}
    
    for char in paren_string:
        if char in mapping.values():
            stack.append(char)
        elif char in mapping.keys():
            if not stack or mapping[char] != stack.pop():
                return "False"
    
    return "True" if not stack else "False"

if __name__ == "__main__":
    try:
        paren_string = sys.stdin.readline().strip()
        result = check_valid_parenthesis(paren_string)
        sys.stdout.write(result)
    except:
        pass
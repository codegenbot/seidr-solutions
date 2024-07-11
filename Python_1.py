def get_separated_parentheses(text):
    return [text[i:i+2] for i in range(0, len(text), 2)]

result = get_separated_parentheses(input())
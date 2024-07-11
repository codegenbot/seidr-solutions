```
def get_separated_parentheses(text):
    return [text[i:i+2] for i in range(0, len(text), 2)]

text = input("Enter the text: ")
separate_paren_groups = get_separated_parentheses(text)
check(separate_paren_groups)
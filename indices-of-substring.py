def indices_of_substring(text, target):
    pattern = r"(?=(%s))" % re.escape(target)
    return [match.start() for match in re.finditer(pattern, text)]

text = input("Enter a text string: ")
target = input("Enter a target string: ")
indices = indices_of_substring(text, target)
print(f"The indices of '{target}' in '{text}' are: {indices}")
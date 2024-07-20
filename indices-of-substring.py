```
text = input("Enter the text: ")
while len(text.strip()) == 0:
    print("Text cannot be empty. Please try again.")
    text = input("Enter the text: ")

target = input("Enter the target string: ")
while len(target.strip()) == 0:
    print("Target cannot be empty. Please try again.")
    target = input("Enter the target string: ")

result = [m.start() for m in re.finditer(target, text)]
if result:
    print(result)
else:
    print("Target not found in Text")
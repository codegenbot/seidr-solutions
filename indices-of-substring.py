```
text = input("Enter the text: ").strip()
target = input("Enter the target: ").strip()

result = [m.start() for m in re.finditer(target, text)]
print(result) if result else print([])
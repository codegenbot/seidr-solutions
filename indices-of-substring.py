text = input("Enter the text: ")
target = input("Enter the target: ").strip()

while not text or not target:
    print("Invalid input! Please try again.")
    text = input("Enter the text: ")
    target = input("Enter the target: ").strip()

result = [m.start() for m in iter(re.finditer(target, text)) if target]
print(result)
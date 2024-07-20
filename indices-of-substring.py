text = input("Enter the text: ")
target = input("Enter the target string: ")

result = [m.start() for m in (i for i in range(len(text)) if text.startswith(target, i))]
if result:
    print(result)
else:
    print("Target not found in Text")
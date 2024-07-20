text = input("Enter the text: ")
target = input("Enter the target: ").strip()

if not text or not target:
    print()
else:
    import re
    result = [m.start() for m in re.finditer(target, text)]
    if result:
        print(result)
    else:
        print(list(range(len(text))))
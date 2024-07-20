```python
text = input("Enter the text: ")
target = input("Enter the target: ")

if text and target:
    import re
    result = [m.start() for m in re.finditer(target, text)]
    if result:
        print(result)
    else:
        print("Target not found in Text")
else:
    print("Please enter both a text and target string.")
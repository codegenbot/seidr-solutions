```python
text = input("Enter a text: ")
if isinstance(text, str):
    print(fix_spaces(text))
else:
    print("Invalid input. Please enter a string.")
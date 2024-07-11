```python
text = input("Enter a text: ")
if isinstance(text, str):
    print(text.replace("  ", " ").replace("   "," ").replace("    "," "))
else:
    print("Invalid input. Please enter a string.")
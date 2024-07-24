```
import re

def check(text):
    if not text:
        return ""

    text = text.replace("\n", " ")

    text = text.strip().replace(" ", "_").replace('"', '').replace("'", '')
    while "__" in text:
        text = text.replace("__", "_-")
    return text

filename = input("Please enter the filename: ")
try:
    with open(filename, 'r') as file:
        print(check(file.read()))
except FileNotFoundError:
    print("File not found. Please check the filename and try again.")
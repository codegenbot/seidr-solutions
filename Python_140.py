def fix_spaces():
    text = input("Enter the text: ")
    new_text = text.replace("  ", " ").replace(" ", "_")
    print(new_text)
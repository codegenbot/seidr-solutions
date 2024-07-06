def fix_spaces():
    text = input("Enter a string: ")
    text = text.replace(' ', '_')
    return text.replace('  ', '_').replace('___', '-').replace('_  ', '_-').replace('_ ___', '_-')

print(fix_spaces())
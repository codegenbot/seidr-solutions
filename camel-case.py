print("Please enter a string in kebab-case: ")
s = input()

def camel_case(s):
    words = s.split("-")
    if len(words) > 1:
        return words[0].capitalize() + ''.join(word.lower() for word in words[1:])
    else:
        return words[0].capitalize()

print(camel_case(s).replace('-', ''))
def camel_case(s):
    return (
        "".join(word.capitalize() for word in s.split())
        if " " in s
        else s.replace("-", "").capitalize()
    )


while True:
    user_input = input("Enter a string (or 'stop' to quit): ")
    if user_input.lower() == "stop":
        break
    print(camel_case(user_input))
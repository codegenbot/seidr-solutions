```
prefix = input("Enter a prefix: ")
words = []
while True:
    user_word = input("Enter a word (or 'stop' to finish): ")
    if user_word.lower() == "stop":
        break
    words.append(user_word)

expected_word = input(f"Enter an expected word for the prefix {prefix} (or 'stop' to finish): ")
while True:
    if expected_word.lower() == "stop":
        break
    print(f"{expected_word} is a match")
    while True:
        user_word = input("Enter a word (or 'stop' to finish): ")
        if user_word.lower() == "stop":
            break
        if user_word.startswith(prefix) or expected_word.lower() == user_word.lower():
            print(f"Found match: {user_word}")
            break
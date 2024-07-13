def check():
    prefix = input("Enter a prefix: ")
    words = []
    while True:
        user_word = input("Enter a word (or 'stop' to finish): ")
        if user_word.lower() == "stop":
            break
        words.append(user_word)

    expected_word = input(
        f"Enter an expected word for the prefix {prefix} (or 'stop' to finish): "
    )
    while True:
        if expected_word.lower() == "stop":
            break
        print(f"{expected_word} is a match")
        expected_word = input("Enter another expected word (or 'stop' to finish): ")

    for word in words:
        if word.startswith(prefix):
            print(f"Found match: {word}")


check()
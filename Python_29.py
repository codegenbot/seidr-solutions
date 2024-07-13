def find_matches(prefix):
    words = []

    while True:
        user_word = input("Enter a word (or 'stop' to finish): ")
        if user_word.lower() == "stop":
            break
        words.append(user_word)

    expected_word = None

    while True:
        print(f"Enter an expected word for the prefix {prefix} (or 'stop' to finish): ")
        user_input = input()
        if user_input.lower() == "stop":
            break
        if not expected_word:
            expected_word = user_input
            print(f"{expected_word} is a match")
        else:
            print(f"{user_input} is a match")

    stored_expected = None

    for word in words:
        if word.startswith(prefix):
            print(f"Found match: {word}")
        elif stored_expected and stored_expected.lower() == word.lower():
            print(f"Found match: {word}")
            stored_expected = None
        else:
            stored_expected = expected_word
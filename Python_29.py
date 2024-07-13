def find_matches():
    prefix = input("Enter a prefix: ")
    words = []

    while True:
        user_word = input("Enter a word (or 'stop' to finish): ")
        if user_word.lower() == "stop":
            break
        words.append(user_word)

    expected_word = None

    while True:
        expected_word_input = input(
            f"Enter an expected word for the prefix {prefix} (or 'stop' to finish): "
        )
        if expected_word_input.lower() == "stop":
            break
        print(f"{expected_word_input} is a match")
        expected_word = expected_word_input

    for word in words:
        if word.startswith(prefix):
            print(f"Found match: {word}")
        elif expected_word and expected_word.lower() == word.lower():
            print(f"Found match: {word}")
            expected_word = None
        else:
            expected_word = None


find_matches()
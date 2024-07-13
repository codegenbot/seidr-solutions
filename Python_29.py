def check():
    prefix = input("Enter a prefix: ")
    words = []
    while True:
        user_word = input("Enter a word (or 'stop' to finish): ")
        if user_word.lower() == "stop":
            break
        words.append(user_word)

    if len(prefix) > 5:
        print("Prefix is too long")
    else:
        expected_words = []
        while True:
            expected_input = input("Enter an expected word (or 'stop' to finish): ")
            if expected_input.lower() == "stop":
                break
            expected_words.append(expected_input)

        for word in words:
            if word.startswith(prefix):
                print(f"Found match: {word}")
        for word in expected_words:
            if word.startswith(prefix):
                print(f"Expected match: {word}")


check()
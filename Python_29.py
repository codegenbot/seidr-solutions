```
def check():
    prefix = input("Enter a prefix: ")
    words = []
    while True:
        user_word = input("Enter a word (or 'stop' to finish): ")
        if user_word.lower() == "stop":
            break
        words.append(user_word)

    expected_words = set()
    while True:
        expected_word = input(
            f"Enter an expected word for the prefix {prefix} (or 'stop' to finish): "
        )
        if expected_word.lower() == "stop":
            break
        expected_words.add(expected_word)

    for word in words:
        if word.startswith(prefix):
            print(f"Found match: {word}")
            if any(exp_word in word for exp_word in expected_words):
                print(f"{word} is a match")
            else:
                print(f"{word} is not a match")

check()
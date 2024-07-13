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
        for word in words:
            if word.startswith(prefix):
                print(f"Found match: {word}")


check()
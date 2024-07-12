def problem162():
    import hashlib

    def get_hash(s):
        return hashlib.md5(s.encode()).hexdigest()

    while True:
        print("Please enter some text (alphanumeric characters only): ", end="")
        s = input().strip()

        if not s:
            continue

        if s.isalnum():
            break
        else:
            print("Please enter some alphanumeric characters.")

    output = get_hash(s)
    print(f"Output: {output}")
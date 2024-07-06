def words_string():
    while True:
        s = input("Please enter a string with comma-separated values: ")
        if not s:
            print("Input cannot be blank. Please enter valid text.")
            continue
        result = [x.strip() for x in re.split("[,\s]+", s.strip()) if x]
        return result

print(words_string())
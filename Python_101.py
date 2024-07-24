def words_string():
    s = input("Enter your string: ")
    return [word.split()[0].replace("\n", "").strip().rstrip() for word in s.replace("\n", "").split(",|")]

print(words_string())
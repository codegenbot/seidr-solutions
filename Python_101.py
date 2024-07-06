```
import re


def words_string():
    results = {}
    while True:
        s = input("Please enter a string with comma-separated values or press Enter to stop: ")
        if not s:
            break
        elif s.strip() == "":
            print("No input provided. Please try again.")
            continue
        result = [x.strip() for x in re.split("[,\s]+", s) if x]
        for word in set(result):
            results[word] = results.get(word, 0) + 1
    return results


print(words_string())
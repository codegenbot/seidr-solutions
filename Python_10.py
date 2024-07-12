print("Anagrams:")
if result:
    for i, word_list in enumerate(result):
        print(f"Group {i+1}: {' -> '.join(word_list)}")
else:
    print("No anagrams found.")
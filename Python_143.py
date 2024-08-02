def words_in_sentence(sentence):
    result = []
    for word in sentence.split():
        if all(
            int(i) != j and int(i) % j != 0
            for i in str(len(word))
            for j in range(2, int(len(word) ** 0.5) + 1)
        ):
            result.append(word)
    return " ".join(result)
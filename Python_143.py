def words_in_sentence(sentence):
    result = []
    for word in sentence.split():
        if all(
            i != j and ((word[i] - word[j]) % (i - j) != 1)
            for i in range(len(word))
            for j in range(i)
        ):
            result.append(word)
    return " ".join(result).strip()
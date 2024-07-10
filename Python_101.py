def sentence_reverser(input_string):
    def words_string(s):
        return s.replace(",", " ").split()

    output = words_string(input_string)
    reversed_sentence = " ".join(output[::-1])
    return reversed_sentence
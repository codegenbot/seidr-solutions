def capitalize_and_swap(input_string):
    def words_string(s):
        return s.replace(",", " ").split()

    output = words_string(input_string)
    capitalized_output = [word.capitalize() for word in output]
    if len(output) > 1:
        return " ".join(capitalized_output)[::-1]
    else:
        return " ".join(capitalized_output)
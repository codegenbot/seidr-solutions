def check_if_last_char_is_a_letter(txt):
    return txt and txt[-1].isalpha() and txt.rfind(" ") < txt.rfind(txt[-1])
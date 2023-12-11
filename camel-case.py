def convert_to_camelcase(kebab_case_string):
    words = kebab_case_string.split("-")
    camel_case_string = ""
    for word in words:
        if word == "":
            continue
        camel_case_string += word.title()
    return camel_case_string

def test_convert_to_camelcase():
    assert convert_to_camelcase("") == ""
    assert convert_to_camelcase("nospaceordash") == "nospaceordash"
    assert convert_to_camelcase("two-words") == "twoWords"
    assert convert_to_camelcase("two words") == "two words"
    assert convert_to_camelcase("all separate words") == "all separate words"

if __name__ == "__main__":
    test_convert_to_camelcase()
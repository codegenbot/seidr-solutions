def fix_spaces(input_text):
    return "_".join(input_text.replace(" ", "_").upper().split())


def check(input_text):
    input_text = input_text.strip()
    assert fix_spaces(input_text) == "-Exa_1_2_2_mple"
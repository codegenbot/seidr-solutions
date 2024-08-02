int main() {
    assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");
    assert(fix_spaces("Exam ple") == "Exam_ple");
    assert(fix_spaces("NoSpaces") == "NoSpaces");
    assert(fix_spaces("") == "");
    return 0;
}
string int_to_mini_romank(int number) {
    vector<string> roman{"i", "ii", "iii", "iv", "v", "vi", "vii", "viii", "ix", "x",
                         "xi", "xii", "xiii", "xiv", "xv", "xvi", "xvii", "xviii", "xix", "xx",
                         "xxi", "xxii", "xxiii", "xxiv", "xxv", "xxvi", "xxvii", "xxviii", "xxix", "xxx",
                         "xxxi", "xxxii", "xxxiii", "xxxiv", "xxxv", "xxxvi", "xxxvii", "xxxviii", "xxxix", "xl",
                         "xli", "xlii", "xliii", "xliv", "xlv", "xlvi", "xlvii", "xlviii", "xlix", "l",
                         "li", "lii", "liii", "liv", "lv", "lvi", "lvii", "lviii", "lix", "lx",
                         "lxi", "lxii", "lxiii", "lxiv", "lxv", "lxvi", "lxvii", "lxviii", "lxix", "lxx",
                         "lxxi", "lxxii", "lxxiii", "lxxiv", "lxxv", "lxxvi", "lxxvii", "lxxviii", "lxxix", "lxxx",
                         "lxxxi", "lxxxii", "lxxxiii", "lxxxiv", "lxxxv", "lxxxvi", "lxxxvii", "lxxxviii", "lxxxix", "xc",
                         "xci", "xcii", "xciii", "xciv", "xcv", "xcvi", "xcvii", "xcviii", "xcix", "c",
                         "ci", "cii", "ciii", "civ", "cv", "cvi", "cvii", "cviii", "cix", "cx",
                         "cxi", "cxii", "cxiii", "cxiv", "cxv", "cxvi", "cxvii", "cxviii", "cxix", "cxx",
                         "cxxi", "cxxii", "cxxiii", "cxxiv", "cxxv", "cxxvi", "cxxvii", "cxxviii", "cxxix", "cxxx",
                         "cxxxi", "cxxxii", "cxxxiii", "cxxxiv", "cxxxv", "cxxxvi", "cxxxvii", "cxxxviii", "cxxxix", "cxl",
                         "cxli", "cxlii", "cxliii", "cxliv", "cxlv", "cxlvi", "cxlvii", "cxlviii", "cxlix", "cl",
                         "cli", "clii", "cliii", "cliv", "clv", "clvi", "clvii", "clviii", "clix", "clx",
                         "clxi", "clxii", "clxiii", "clxiv", "clxv", "clxvi", "clxvii", "clxviii", "clxix", "clxx",
                         "clxxi", "clxxii", "clxxiii", "clxxiv", "clxxv", "clxxvi", "clxxvii", "clxxviii", "clxxix", "clxxx",
                         "clxxxi", "clxxxii", "clxxxiii", "clxxxiv", "clxxxv", "clxxxvi", "clxxxvii", "clxxxviii", "clxxxix", "cxc",
                         "cxci", "cxcii", "cxciii", "cxciv", "xcv", "xcvi", "xcvii", "xcviii", "xcix", "cc"
                        };

    return roman[number - 1];
}
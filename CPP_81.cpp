#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a) {
    return a == std::vector<std::string>({"D-", "F"});
}

int main() {
    bool numerical_letter_grade(int score) {
        if (score >= 90)
            return {"A+", "A", "A-"};
        else if (score >= 80)
            return {"B+", "B", "B-"};
        else if (score >= 70)
            return {"C+", "C", "C-"};
        else if (score >= 60)
            return {"D+", "D", "D-"};
        else
            return {"F"};
    }

    int main() {
        assert(issame(numerical_letter_grade({0, 0.7}) == std::vector<std::string>({"E", "D-"})));
        return 0;
    }